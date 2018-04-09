/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**  Joan Josep Moreno                                                            **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
 const int A = A1 ;          
 const int led0 = 5;         
 const int led1 = 6;          
 const int led2 = 7;          
 const int led3 = 8;          
 const int led4 = 9;          
 const int led5 = 10;         
 const int led6 = 11;         
 const int led7 = 12;         
 const int SORTIDA = A0;
 const int PONT = A2;
int tempo = 200;
//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
  pinMode(led6, OUTPUT);     
  pinMode(led7, OUTPUT);    
  pinMode(SORTIDA, OUTPUT);     
  pinMode(A, INPUT);     
  pinMode(PONT, INPUT); 
}
//********** Loop *****************************************************************
void loop()
{
if ( digitalRead(A ) == 1) 
{  
  digitalWrite(led0, HIGH);   
  delay (tempo);
  digitalWrite(led1, HIGH);    
  digitalWrite(led0, LOW);     
    delay (tempo);
  digitalWrite(led2, HIGH);    
  digitalWrite(led1, LOW);     
  delay (tempo);
  digitalWrite(led3, HIGH);    
  digitalWrite(led2, LOW);     
   delay (tempo);
  digitalWrite(led4, HIGH);    
  digitalWrite(led3, LOW);     
   delay (tempo);
  digitalWrite(led5, HIGH);     
  digitalWrite(led4, LOW);    
    delay (tempo);
  digitalWrite(led6, HIGH);     
  digitalWrite(led5, LOW);     
  delay (tempo);
  digitalWrite(led7, HIGH);     
  digitalWrite(led6, LOW);     
  delay (tempo);
  digitalWrite(led7, LOW);     
    delay (tempo);
   digitalWrite(SORTIDA, HIGH);     
   delay (tempo);
   digitalWrite(SORTIDA, LOW);      
  }
  else
{
if ( digitalRead(PONT ) == 1) 
{ 
  digitalWrite(led0, HIGH);    
   delay (tempo);
  digitalWrite(led1, HIGH);    
  digitalWrite(led0, LOW);     
    delay (tempo);
  digitalWrite(led2, HIGH);    
  digitalWrite(led1, LOW);     
  delay (tempo);
  digitalWrite(led3, HIGH);     
  digitalWrite(led2, LOW);     
   delay (tempo);
  digitalWrite(led4, HIGH);     
  digitalWrite(led3, LOW);     
   delay (tempo);
  digitalWrite(led5, HIGH);     
  digitalWrite(led4, LOW);     
    delay (tempo);
  digitalWrite(led6, HIGH);     
  digitalWrite(led5, LOW);     
  delay (tempo);
  digitalWrite(led7, HIGH);     
  digitalWrite(led6, LOW);     
  delay (tempo);
  digitalWrite(led7, LOW);     
    delay (tempo)
   digitalWrite(SORTIDA, HIGH);      
   delay (tempo);
   digitalWrite(SORTIDA, LOW);       
} 
}}
//********** Funcions *************************************************************
