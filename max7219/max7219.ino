#include "LedControl.h" 
LedControl lc=LedControl(6,5,7,1);

void setup(){
  lc.shutdown(0,false);// turn off power saving, enables display
  lc.setIntensity(0,4);// sets brightness (0~15 possible values)
  lc.clearDisplay(0);// clear screen

}

void loop()
{
  for (int active_row = 0; active_row <= 7; active_row++){
    for (int current_row = 0; current_row <= 7; current_row++){
      if (active_row == current_row){
        lc.setRow(0,current_row,B10000000); 
      }else{
        lc.setRow(0,current_row,B00000000); 
      }
    }
    delay(125);
  }
  
}
