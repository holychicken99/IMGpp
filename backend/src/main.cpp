
#include <main.hpp>
imgViewer::imgViewer(std::string filename) {
  try {
    boost::gil::read_and_convert_image(filename, img, boost::gil::png_tag());
    this->I_width = img.width();
    this->I_height = img.height();

  } catch (std::exception &e) {

    std::cout << e.what() << '\n';
  }
}

uint16_t imgViewer::get_Height() { return this->I_height; }

uint16_t imgViewer::get_Width() { return this->I_width; }

unsigned int imgViewer::save_Img(std::string filename) {
  boost::gil::write_view(filename, boost::gil::const_view(img),
                         boost::gil::png_tag());

  return EXIT_SUCCESS;
}

void imgViewer::flip_Img_Vertical() {

  boost::gil::gray8_pixel_t px;
  for (int i = 0; i < this->I_height; i++) {

    for (int j = 0; j < this->I_width / 2; j++) {

      px = *boost::gil::view(this->img).at(j, i);

      boost::gil::view(this->img).at(j, i)[0] =
          boost::gil::view(this->img).at(this->I_width - j - 1, i)[0];

      boost::gil::view(this->img).at(I_width - j - 1, i)[0] = px[0];
    }
  }
}

void imgViewer::flip_Img_Horizontal() {

  boost::gil::gray8_pixel_t px;
  for (int i = 0; i < this->I_width; i++) {

    for (int j = 0; j < this->I_height / 2; j++) {

      px = *boost::gil::view(this->img).at(i, j);
      boost::gil::view(this->img).at(i, j)[0] =
          boost::gil::view(this->img).at(i, I_height - j - 1)[0];
      boost::gil::view(this->img).at(i, I_height - j - 1)[0] = px[0];
    }
  }
}
void imgViewer::resize_by_pixels(uint16_t height, uint16_t width) {

  boost::gil::gray8_image_t refImg(width, height);
  boost::gil::resize_view(boost::gil::const_view(img), boost::gil::view(refImg),
                          boost::gil::bilinear_sampler());
  img=refImg;

}


// int main() {

//   imgViewer sol("demo3.png");
//   sol.flip_Img_Horizontal();
//   sol.resize_by_pixels(500,500);
//   //  sol.printInfo();
//   sol.save_Img("lpol1.png");

  //    std::string filename("demo3.png");
  //    boost::gil::gray8_image_t img;
  //  //
  //      boost::gil::read_and_convert_image(filename, img,
  //      boost::gil::png_tag());
  //    boost::gil::gray8_pixel_t px=*boost::gil::const_view(img).at(5,10);
  //    // std::cout << "the pixel is "<< (int)px[0] << '\n';
  //    boost::gil::rgb8_image_t imgops;
  //
  //
  //    boost::gil::write_view("out-resize.jpg", boost::gil::const_view(imgops),
  //    boost::gil::png_tag{});

  //  namespace bg = boost::gil;

  //  bg::rgb8_image_t img;
  //  bg::read_image("test.tiff", img, bg::tiff_tag{});

  // test resize_view
  // Scale the image to 100x100 pixels using bilinear resampling
  //  bg::rgb8_image_t square100x100(100, 100);

  //  bg::write_view(img, bg::const_view(square100x100), bg::tiff_tag{});

  //    write_view("lol.png",img,png_tag());

  //     auto pt = img.dimensions();
  //  std::cout << "the images is " << img.height() << " by" << img.I_width() <<
  //  '\n';

  //    std::string filename("demo.jpeg");
  // gil::rgb8_image_t img;
  // gil::read_image("demo.jpg",img,boost::gil::jpeg_tag());
  // std::cout << "Read complete, got an image " << img.I_width()
  //           << " by " << img.height() << " pixels\n";
  // gil::rgb8_pixel_t px = *const_view(img).at(5, 10);
  // std::cout << "The pixel at 5,10 is "
  //           << (int)px[0] << ','
  //           << (int)px[1] << ','
  //           << (int)px[2] << '\n';
// }