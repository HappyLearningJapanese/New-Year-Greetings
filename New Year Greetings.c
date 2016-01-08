#include <stdio.h>
#include <stdlib.h>

struct date{
   int year;
   int month;
   int day;
};typedef struct date DATE;

void aisatsu(int,int,int); //先定義一個「挨拶(あいさつ)」方法

int main()  //程式碼進入點
{
   DATE today;  //定義 today 的時間參數
   printf("今日の日付を入力して下さい,　\nyear:"); //請輸入今天的日期
   scanf("%d",&today.year);
   printf("month:");
   scanf("%d",&today.month);
   printf("day");
   scanf("%d",&today.day);
   aisatsu(today.year, today.month, today.day); //將剛剛所輸入的日期傳進去「挨拶」的方法
   return 0;
}

void aisatsu(int year, int month, int day){
   if(year==2015)  //假如輸入的日子的年份是2015則顯示 "新年快樂" 否則 顯示 "年份錯了吧"
      printf("明けましておめでとうこざいます,　\n"); //新年快樂
   else{
      printf("年違うやん\n");  //年份錯了吧
      exit(EXIT_FAILURE);
   }
   if(month!=1){  //假如輸入的日子的月份不等於1 則顯示 "很晚才寄到耶"
      printf("届くの、めっちゃ遅いやん,　\n");  //很晚才寄到耶
      exit(EXIT_FAILURE);
   }
   if(day==1)  //假如輸入的日子的日期等於1 則顯示 "今年也請多關照"，假如小於4日則顯示"今..今年也請多關照...抱歉這麼晚才寄到"，超過4日則顯示"不是，因為年底有很多事要忙"
      printf("今年もよろしくお願いします。,　\n");  //今年也請多關照
   else if(day<4)
      printf("こ、今年もよろしくお願いします...\n届くの遅くなって申し訳ない。");  //今..今年也請多關照...抱歉這麼晚才寄到
   else
      printf("ちゃうねん、年末色々と忙しかってん \n");   //不是，因為年底有很多事要忙
}
