/*
 * Dispositivo.h
 *
 *  Created on: 17 may. 2022
 *      Author: acasas
 */

#ifndef DISPOSITIVO_H_
#define DISPOSITIVO_H_

class Dispositivo {
public:
    virtual void print_device() = 0;
    virtual ~Dispositivo();
};

#endif /* DISPOSITIVO_H_ */
