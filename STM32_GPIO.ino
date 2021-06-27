
void setup()
{  
 GPIOC_BASE->CRH &=0;
}

void loop() 
{ 
  GPIOC_BASE->BSRR|= 0x00002000;
  delay(500);
  GPIOC_BASE->BSRR|= 0x20000000;
  delay(500);
}
