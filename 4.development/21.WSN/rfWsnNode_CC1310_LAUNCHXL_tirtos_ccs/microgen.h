#ifndef microgen_h
#define microgen_h

#define NUM_OF_COMMANDS 4

typedef struct{
    int DCBUS;
    int VPV;
    int IPV;
    int PWR;
}pv2wifi;


typedef struct{
    char * command;
    int size;
}ugen_comm;


#endif
