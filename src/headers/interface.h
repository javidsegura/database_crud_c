#ifndef INTERFACE_H
#define INTERFACE_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>





void end_request(){

      int user_decision;

      printf("\n\n\n\n------------------------------------\n");
      printf("Return to homepage (0) or exit program (1): \n");
      printf("==> ");
      scanf("%d", &user_decision);

      switch (user_decision)
      {
      case 0:
            system("clear");
            break;
      case 1:
            system("clear");
            printf("\n\n Goodbye!");
            exit(0);
      default:
            printf("Your option has not been registered. Please, try again.");
            end_request();
            break;
      }



      
}









#endif