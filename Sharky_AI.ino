int przerwa1 = 50;
int przerwa2 = 30;
int przerwa3 = 100;
int przerwa4 = 100;

unsigned long previusTime = 0;

void initRobot(){

  ledcAttach(do_przodu_lewy, 5000, 8);
  ledcAttach(do_tylu_lewy, 5000, 8);
  ledcAttach(do_przodu_prawy, 5000, 8);
  ledcAttach(do_tylu_prawy, 5000, 8);

}

void move_Foward(int predkosc){
  unsigned long currentTime = millis();
  if (currentTime - previusTime >= przerwa2){
    previusTime = currentTime;
    ledcWrite(do_tylu_lewy, 0);
    ledcWrite(do_tylu_prawy, 0);
    ledcWrite(do_przodu_prawy, predkosc-8);
    ledcWrite(do_przodu_lewy, predkosc);
  }
}
void stop_all(){
  ledcWrite(do_przodu_lewy, 0);
  ledcWrite(do_tylu_lewy, 0);
  ledcWrite(do_przodu_prawy, 0);
  ledcWrite(do_tylu_prawy, 0);
}

void go_Back(int czas, int predkosc){
  ledcWrite(do_tylu_lewy, predkosc);
  ledcWrite(do_tylu_prawy, predkosc-8);
}

void TurnRight90(int predkosc) 
{ 
  ledcWrite(do_przodu_lewy, predkosc);     
  delay(700);                       
  ledcWrite(do_przodu_lewy, 0);     
  delay(800);  

} 

void TurnLeft90(int predkosc) 

{ 

  ledcWrite(do_przodu_prawy, predkosc);     
  delay(700);                       
  ledcWrite(do_przodu_prawy, 0);     
  delay(800);  

} 

void TurnRight(int predkosc)
{
  unsigned long currentTime = millis();
  if (currentTime - previusTime >= przerwa1){
    previusTime = currentTime;
    ledcWrite(do_przodu_prawy, 130);
    ledcWrite(do_przodu_lewy, predkosc);
    ledcWrite(do_tylu_lewy, 0);
    ledcWrite(do_tylu_prawy, 0);
  }

}

void TurnHardRight(int predkosc)
{
  unsigned long currentTime = millis();
  if (currentTime - previusTime >= przerwa3){
    previusTime = currentTime;
    ledcWrite(do_tylu_lewy, 0);
    ledcWrite(do_przodu_prawy, 0);
    ledcWrite(do_tylu_prawy, predkosc);
    ledcWrite(do_przodu_lewy, predkosc);
  }

}

void TurnLeft(int predkosc)
{
  unsigned long currentTime = millis();
  if (currentTime - previusTime >= przerwa1){
    previusTime = currentTime;
    ledcWrite(do_przodu_lewy, 150);
    ledcWrite(do_przodu_prawy, predkosc-14);
    ledcWrite(do_tylu_lewy, 0);
    ledcWrite(do_tylu_prawy, 0);
  }
}

void TurnHardLeft(int predkosc)
{
  unsigned long currentTime = millis();
  if (currentTime - previusTime >= przerwa3){
    previusTime = currentTime;
    ledcWrite(do_przodu_lewy, 0);
    ledcWrite(do_przodu_prawy, predkosc-8);
  }
}

void TurnMidiumRight(int predkosc)
{
  unsigned long currentTime = millis();
  if (currentTime - previusTime >= przerwa4){
    previusTime = currentTime;
    ledcWrite(do_tylu_lewy, 0);
    ledcWrite(do_przodu_prawy, 0);
    ledcWrite(do_tylu_prawy, 0);
    ledcWrite(do_przodu_lewy, predkosc);
  }
}

void TurnMidiumLeft(int predkosc)
{
  unsigned long currentTime = millis();
  if (currentTime - previusTime >= przerwa4){
    previusTime = currentTime;
    ledcWrite(do_tylu_lewy, 0);
    ledcWrite(do_przodu_prawy, predkosc);
    ledcWrite(do_tylu_prawy, 0);
    ledcWrite(do_przodu_lewy, 0);
  }
}


void LookAround(int v) 

{ 

  ledcWrite(do_przodu_lewy, v);    
  ledcWrite(do_tylu_prawy, v-12);  
  delay(200);                       
  ledcWrite(do_przodu_lewy, 0);  
  ledcWrite(do_tylu_prawy, 0);   
  delay(800);  
  ledcWrite(do_przodu_prawy, v-12);    
  ledcWrite(do_tylu_lewy, v);  
  delay(300);                       
  ledcWrite(do_przodu_prawy, 0);  
  ledcWrite(do_tylu_lewy, 0);   
  delay(800);  
  ledcWrite(do_przodu_lewy, v);    
  ledcWrite(do_tylu_prawy, v-12);  
  delay(200);                       
  ledcWrite(do_przodu_lewy, 0);  
  ledcWrite(do_tylu_prawy, 0);   
  delay(800);  

} 

void goBack_Right(int predkosc){
  unsigned long currentTime = millis();
  if (currentTime - previusTime >= przerwa1){
    previusTime = currentTime;
    ledcWrite(do_przodu_prawy, 0);
    ledcWrite(do_przodu_lewy, 0);
    ledcWrite(do_tylu_lewy, predkosc-8);
    ledcWrite(do_tylu_prawy, 0);
  }
}

void goBack_Left(int predkosc){
  unsigned long currentTime = millis();
  if (currentTime - previusTime >= przerwa1){
    previusTime = currentTime;
    ledcWrite(do_przodu_lewy, 0);
    ledcWrite(do_tylu_lewy, 0);
    ledcWrite(do_tylu_prawy, predkosc-8);
    ledcWrite(do_przodu_prawy, 0);
  }
}
