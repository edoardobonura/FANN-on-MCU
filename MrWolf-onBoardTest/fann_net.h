#ifndef FANN_FANN_NET_H_
#define FANN_FANN_NET_H_

#include "fann.h" 
#include "fann_structs.h" 

const enum fann_nettype_enum network_type = 0;

const fann_neuron fann_neurons[18] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 9, 256, 5}, {9, 18, 256, 5}, {18, 27, 256, 5}, {27, 36, 256, 5}, {36, 45, 256, 5}, {45, 45, 256, 5}, {45, 51, 256, 5}, {51, 57, 256, 5}, {57, 57, 256, 5}};

const fann_type fann_weights[57] = {743, 149, -217, 116, -640, -208, 193, -534, 314, -234, 19, -179, 237, -210, -295, -186, 845, 272, 140, 84, -46, 37, 219, 210, -81, -422, 2, 382860, 384000, 384000, 384000, -384000, -15549, -2355, -143479, 362202, 369, 409, 2, -113, -651, -20, 470, 94, -304, -244, 185, 474, 237, 278, -242, 375, -220, -628, 279, -407, 51};

const fann_layer fann_layers[3] = {{0, 9}, {9, 15}, {15, 18}};


#endif // FANN_FANN_NET_H_