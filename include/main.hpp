//
// Created by alpha on 9/10/21.
//

#ifndef BOOST_FILEVIEWER_MAIN_HPP
#define BOOST_FILEVIEWER_MAIN_HPP

#include <boost/gil.hpp>
#include <boost/gil/extension/io/png.hpp>
#include <exception>
#include <iostream>


class imgViewer{
  boost::gil::gray8_image_t img;
  uint16_t I_width = 0;
  uint16_t I_height = 0;
public :

  explicit imgViewer(std::string filename); /// \constructor default constructor
  uint16_t get_Height();  /// \getHeight return the height of the image
  uint16_t get_Width() ;/// \getWidth returns the width of the image
  unsigned int save_Img(std::string filename); /// \saveimage as the filename
  void flip_Img_Vertical();/// \flip the image vertically
  void flip_Img_Horizontal();/// \flips the image horizontally
  void printInfo(){
    std::cout << "the image is "<< img.height()<<"by "<< img.width()<<'\n';
  }








};



























#endif // BOOST_FILEVIEWER_MAIN_HPP
