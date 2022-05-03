QT       += core gui serialport multimedia printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    capturethread.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp

HEADERS += \
    capturethread.h \
    mainwindow.h \
    qcustomplot.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += D:\MY_WORK\zbar\include
LIBS += D:\MY_WORK\zbar\bin\libzbar64-0.dll

INCLUDEPATH += D:\MY_WORK\OPENCV\opencvx2\opencv\release\install\include

LIBS += D:\MY_WORK\OPENCV\opencvx2\opencv\release\bin\libopencv_core455.dll
LIBS += D:\MY_WORK\OPENCV\opencvx2\opencv\release\bin\libopencv_imgproc455.dll
LIBS += D:\MY_WORK\OPENCV\opencvx2\opencv\release\bin\libopencv_video455.dll
LIBS += D:\MY_WORK\OPENCV\opencvx2\opencv\release\bin\libopencv_videoio455.dll
LIBS += D:\MY_WORK\OPENCV\opencvx2\opencv\release\bin\libopencv_highgui455.dll
LIBS += D:\MY_WORK\OPENCV\opencvx2\opencv\release\bin\libopencv_objdetect455.dll

INCLUDEPATH += D:\MY_WORK\lib\boost_1_79_0\MY_WORKlibBoostbuild\include\boost-1_79

