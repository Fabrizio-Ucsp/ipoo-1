#include <windef.h>
void gotox(int x,int y){
    HANDLE name;
    name=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD ubi;
    ubi.X=x;ubi.Y=y;
    SetConsoleCursorPosition(name,ubi);
}
void hidecursor(){
    HANDLE name;
    name=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor;
    cursor.dwSize=10;
    cursor.bVisible=false;
    SetConsoleCursorInfo(name,&cursor);
}
void limites(){
    for(int i=2;i<100;i++){
        gotox(i,3);cout<<char(205);
        gotox(i,35);cout<<char(205);
    }
    for(int i=4;i<35;i++){
        gotox(1,i);cout<<char(186);
        gotox(100,i);cout<<char(186);
    }
    gotox(1,3);cout<<char(201);
    gotox(1,35);cout<<char(200);
    gotox(100,3);cout<<char(187);
    gotox(100,35);cout<<char(188);
}
void gameendtxt(int score){
    gotox(5,5);cout<<"      _____          __  __ ______    ______      ________ _____  _       "<<endl;
    gotox(5,6);cout<<"     / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\| |      "<<endl;
    gotox(5,7);cout<<"    | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) | |      "<<endl;
    gotox(5,8);cout<<"    | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /| |      "<<endl;
    gotox(5,9);cout<<"    | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\|_|      "<<endl;
    gotox(5,10);cout<<"     \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_(_)      "<<endl;
    gotox(0,0);cout<<"                 ";
    gotox(35,13);cout<<"SCORE  :"<<score;
}
