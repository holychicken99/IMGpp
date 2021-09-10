#include <boost/gil.hpp>
#include <boost/gil/extension/io/png.hpp>
#include <exception>
#include <iostream>
using namespace boost::gil;

class imgViewer {
  boost::gil::gray8_image_t img;
  uint16_t I_width = 0;
  uint16_t I_height = 0;

public:
  /// \constructor
  explicit imgViewer(std::string filename) {
    try {
      boost::gil::read_image(filename, img, boost::gil::png_tag());
      this->I_width = img.width();
      this->I_height = img.height();

    } catch (std::exception &e) {

      std::cout << e.what() << '\n';
    }
  }
  /// \saveimage as the filename
  void saveImg(std::string filename, boost::gil::gray8_image_t temp) {
    boost::gil::write_view(filename, boost::gil::const_view(temp),
                           boost::gil::png_tag{});
  }
};

int main() {

  //  std::string filename("demo3.png");
  //  boost::gil::gray8_image_t img;
  //
  //    boost::gil::read_image(filename, img, boost::gil::png_tag{});
  //    boost::gil::gray8_pixel_t px=*boost::gil::const_view(img).at(5,10);
  //    // std::cout << "the pixel is "<< (int)px[0] << '\n';
  //    boost::gil::rgb8_image_t imgops;
  //
  //
  //    boost::gil::write_view("out-resize.jpg", boost::gil::const_view(imgops),
  //    boost::gil::png_tag{});

  namespace bg = boost::gil;

  bg::rgb8_image_t img;
//  bg::read_image("test.tiff", img, bg::tiff_tag{});

  // test resize_view
  // Scale the image to 100x100 pixels using bilinear resampling
  bg::rgb8_image_t square100x100(100, 100);

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
}