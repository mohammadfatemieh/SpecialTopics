#ifndef microgen_h
#define microgen_h

#define NUM_OF_COMMANDS 4

typedef struct{
    uint16_t DCBUS;
    uint16_t VPV;
    uint16_t IPV;
    uint16_t PWR;
}pv2wifi;


typedef struct{
    char * command;
    int size;
}ugen_comm;


#endif

