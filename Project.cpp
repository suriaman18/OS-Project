#include<stdio.h> 
 
int main() 
{ 
      int i, process, total = 0, x, counter = 0, tq; 
      int wt = 0, tat = 0, at[10], bt[10], temp[10]; 
      float A_WT, A_TAT;
      printf("\nEnter Total Number of Processes:\t"); 
      scanf("%d", &process); 
      x = process; 
      for(i = 0; i < process; i++) 
      {
            printf("\nEnter Details of Process[%d]\n", i + 1);
            printf("Arrival Time:\t");
            scanf("%d", &at[i]);
            printf("Burst Time:\t");
            scanf("%d", &bt[i]); 
            temp[i] = bt[i];
      } 
      printf("\nEnter Time Quantum:\t"); 
      scanf("%d", &tq); 
      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
