/*
===============================================================
>Submission 2.1 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>messageboard-b
================================================================
*/
#include <iostream>
#include <stdexcept>
#include <string>
#include <map>
#include "Direction.hpp"


using namespace std;

namespace ariel{
    class Board{
      
        map<unsigned int, map<unsigned int,char>> map_board;
        
    public:
        Board() {
            }
             ~Board() {} 

        string read(unsigned int r, unsigned int c, Direction d, unsigned int l);
        
        void post(unsigned int r, unsigned int c, Direction d, string s);

        void show();

    };
}
