int timeRequiredToBuy(int* tickets, int ticketsLen, int k ) {
    int i=0,time = 0;
    while(tickets[k]!=0){
        if (tickets[i%ticketsLen] > 0){
            tickets[i%ticketsLen]--;
            time++;
        }
        
        i++;
    }
    return time;
}