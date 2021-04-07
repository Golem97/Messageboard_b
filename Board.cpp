/*
===============================================================
>Submission 2.1 CPP_CS_Ariel University 2021 Year_2 Semester_2 
>Author <Nathanael Benichou>
>messageboard-a  
================================================================
*/
#include "Board.hpp"

namespace ariel{
  

    string Board::read(unsigned int r, unsigned int c, Direction d, unsigned int l){
        unsigned int i = 0;
        string ans;
        switch(d){
             case Direction::Vertical:
                for(; i < l; i++, r++){
                    try{
                        ans += this->map_board.at(r).at(c);
                    }
                    catch(exception& ex){
                        ans.append("_");
                    }
                }
                 break;
            case Direction::Horizontal:
                for(; i < l; i++, c++){
                    try{
                        ans += this->map_board.at(r).at(c);
                    }
                    catch(exception& ex){
                        ans.append("_");
                    }
                }
               
           
        }
        return ans;
        
    }

  void Board::post(unsigned int r, unsigned int c, Direction d, string s){ 
        unsigned int i = 0; 
        switch(d){
            case Direction::Vertical: 
                for(; i < s.length() ; i++, r++){ 
                    this->map_board[r][c] = s.at(i); 
                }
             

                break;
 
            case Direction::Horizontal:
                for(; i < s.length() ; i++, c++){
                    this->map_board[r][c] = s.at(i);
                }
           
        }
    }
    void Board::show(){
  
        
    }

    
}

