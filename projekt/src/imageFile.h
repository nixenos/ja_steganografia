//
// Created by nixen on 22.11.2021.
//

#ifndef PROJEKT_IMAGEFILE_H
#define PROJEKT_IMAGEFILE_H


#include <string>
#include "dataStructures.h"

class imageFile {
private:
    std::string sourceImageFilename;
    std::string resultImageFilename;
    std::string sourceDataFilename;
    std::string resultDataFilename;
    _BMPHEADER BMPHEADER;
    _DIBHEADER DIBHEADER;
    _SGHEADER SGHEADER;
    BITFIELDS mask;
    FILE *filePointer;
    uint8_t *pixelArray;
    uint8_t *dataArray;
    uint8_t *calculatedPixelArray;
    int bitsPerPixel;
    int pixelsCount;

    /**
     * funkcja wczytująca nagłówki z pliku BMP
     * @return
     */
    bool read_headers();

    /**
     * funkcja wczytująca tablicę pixeli z pliku
     */
    bool read_pixel_array();

    /**
     * zapisuje nagłówki do pliku
     * @return status zapisu
     */
    bool write_headers_to_file();

    /**
     * zapisuje tablicę pixeli do pliku
     * @return
     */
    bool write_data_to_file();

    /**
     * sprawdza, czy jest magiczna sekwencja 'SG'
     * @return
     */
    bool check_for_stegano();

    /**
     * czyta ukryte dane z pliku stegano
     * @return
     */
    bool read_hidden_data_from_steganofile();

    /**
     * wczytuje plik, który ma być ukryty
     * @return
     */
    bool read_data_file();

    /**
     * zapisuje plik odczytany z pliku stegano
     * @return
     */
    bool write_data_file();
};


#endif //PROJEKT_IMAGEFILE_H
