#include <iostream> 
#include <boost/gil/extension/io/png.hpp>
namespace gil = boost::gil; 
int main() 
{
    std::string filename( "demo3.png" );
    gil::rgb8_image_t img;
    read_image( filename, img, gil::png_tag() );

//    std::string filename("demo.jpeg");
// gil::rgb8_image_t img;
// gil::read_image("demo.jpg",img,boost::gil::jpeg_tag());
// std::cout << "Read complete, got an image " << img.width()
//           << " by " << img.height() << " pixels\n";
// gil::rgb8_pixel_t px = *const_view(img).at(5, 10);
// std::cout << "The pixel at 5,10 is "
//           << (int)px[0] << ','
//           << (int)px[1] << ','
//           << (int)px[2] << '\n';
}