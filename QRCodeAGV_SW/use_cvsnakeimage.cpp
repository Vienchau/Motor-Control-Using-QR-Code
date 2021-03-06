#include "use_cvsnakeimage.h"

use_cvSnakeImage::use_cvSnakeImage(cv::IplImage *source)
{
    int i, j = 0, c;
      IplImage *src_img, *dst_img;

      CvPoint *contour;
      CvPoint center;
      int length = 60;
      Parameter snake_param = { 0.45, 0.35, 0.2 };
      CvFont font;
      char iter[8];

      src_img=source;

      dst_img = cvCreateImage (cvGetSize (src_img), IPL_DEPTH_8U, 3);

      cvInitFont (&font, CV_FONT_HERSHEY_DUPLEX, 0.7, 0.7);
      center.x = src_img->width / 2;
      center.y = src_img->height / 2;

      contour = (CvPoint *) cvAlloc (sizeof (CvPoint) * length);
      for (i = 0; i < length; i++) {
        contour[i].x = (int) (center.x * cos (2 * CV_PI * i / length) + center.x);
        contour[i].y = (int) (center.y * sin (2 * CV_PI * i / length) + center.y);
      }


      cvCvtColor (src_img, dst_img, CV_GRAY2RGB);
      for (i = 0; i < length - 1; i++) {
        cvLine (dst_img, contour[i], contour[i + 1], CV_RGB (255, 0, 0), 2, 8, 0);
      }
      cvLine (dst_img, contour[length - 1], contour[0], CV_RGB (255, 0, 0), 2, 8, 0);

      cvNamedWindow ("Snakes", CV_WINDOW_NORMAL);
      cvShowImage ("Snakes", dst_img);

      while (j<100)
      {


        cvSnakeImage (src_img, contour, length, &snake_param.alpha, &snake_param.beta, &snake_param.gamma,
                      CV_VALUE, cvSize (15, 15), cvTermCriteria (CV_TERMCRIT_ITER, 1, 0.0), 1);


        cvCvtColor (src_img, dst_img, CV_GRAY2RGB);
        for (i = 0; i < length - 1; i++) {
          cvLine (dst_img, contour[i], contour[i + 1], CV_RGB (255, 0, 0), 2);
        }
        cvLine (dst_img, contour[length - 1], contour[0], CV_RGB (255, 0, 0), 2);
        snprintf (iter, 8, "%03d", ++j);
        cvPutText (dst_img, iter, cvPoint (15, 30), &font, CV_RGB (0, 0, 255));


        cvShowImage ("Snakes", dst_img);
        c = cvWaitKey (0);
        if (c == '\x1b')
          break;
      }

      cvDestroyWindow ("Snakes");
      cvReleaseImage (&src_img);
      cvReleaseImage (&dst_img);
}
