/*
 * Config.h
 *
 *  Created on: 07/10/2022
 *      Author: algo2
 */

#ifndef SRC_CONFIG_H_
#define SRC_CONFIG_H_

class Config {
private:
	static const unsigned MAX_X_TABLERO	= 	20;
	static const unsigned MAX_Y_TABLERO	=	20;
	static const unsigned CARGA_GEN_MAX	=	255;

public:
	Config();
	virtual ~Config();
};

#endif /* SRC_CONFIG_H_ */
