/**
  ******************************************************************************
  * @file    main.c
  * @author  Bilel Boughattas
  * @brief   Macros & generic code
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
//#define INTEL 
 #define OTHERS
#define SOM
#define Mini(var1, var2) ((var1)<(var2) ? (var1) : (var2))
#define MUL
#define Maxi(var3, var4) ((var3)>(var4) ? (var3) : (var4))

/* Private function prototypes -----------------------------------------------*/
 static int SUM(int var1, int var2);
 static int mul(int var3, int var4);
 static int min(int var1, int var2);
 static int max(int var3, int var4);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{ 
  // result of Somme
#ifdef SOM
  int resultSum = SUM(3,4);
#endif
  // result of Minimum
#ifdef Mini
  int resultMin = Mini(3, 4);
#endif
  // result of Multiplication
#ifdef MUL
  int resultMul = mul(6,8);
#endif
  // result of Maximum
  #ifdef Maxi
  int resultMax = Maxi(6, 8);
#endif
  while (1)
  {
   
  }
}
// Somme
#ifdef SOM
 static int SUM(int var1, int var2)
  {
   return (var1+var2);
 }
#endif
// Multiplication
#ifdef MUL
  static int mul(int var3, int var4)
  {
   return (var3*var4);
}
#endif
// return Min
#ifdef Mini
 static int min(int var1, int var2)
  {
   return (var1 , var2);
}
#endif
// return Max
#ifdef Maxi
 static int max(int var3, int var4)
  {
   return (var3 , var4);
}
#endif
/**************************************END OF FILE**************************************/

