double x = 1.23456; 

/* 預設顯示 6 位 */ 
printf("x = %lf\n", x); 

/* 整體寬度佔 10 個長度 (含 "點" 與 "小數") */ 
printf("x = %10lf\n", x); 

/* 顯示小數點 2 位 */ 
printf(" x = %.2lf\n", x); 

/* 整體寬度佔 10 個長度 顯示小數點 2 位*/ 
printf(" x = %10.2lf\n", x); 

/* 寬度、小數位數由變數控制 */ 
int width = 10; 
int precision = 2; 
printf(" x = %*lf\n", width, x); /* 由變數指定寬度 */ 
printf(" x = %.*lf\n", precision, x); /* 由變數指定顯示位數 */ 
printf(" x = %*.*lf\n", width, precision, x); /* 由變數指定寬度與顯示位數 */
