#include <QImage>
#include "visionworker.h"

VisionWorker::VisionWorker(QObject *parent) :
    QObject(parent),
    m_timer(new QTimer(parent))
{
    // Default webcam
    capture.open(0);
    m_timer->start(10); // 60fps
    connect(m_timer, &QTimer::timeout, this, &VisionWorker::updateFrame);
}

void VisionWorker::updateFrame()
{
    cv::Mat frame;
    capture >> frame;

    // Convert cv::Mat to QImage so we can display it in graphics view
    cv::cvtColor(frame, frame,CV_BGR2RGB);
    QImage image((const uchar *) frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);

    emit imageChanged(image);
}
