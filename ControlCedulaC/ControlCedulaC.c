/*
 * ControlCedulaC.c
 *
 *  Created on: 8/04/2020
 *      Author: raul
 */
#include <jni.h>

#include "co_com_mundocostenio_jni_ControlCedulaJni.h"

JNIEXPORT jint JNICALL Java_co_com_mundocostenio_jni_ControlCedulaJni_controloCedula
  (JNIEnv * env, jobject obj, jint nro){
	int control = 0;
	int suma	= 0;
	int total 	= 0;

	int control8 = 3;
	int control7 = 2;
	int control6 = 9;
	int control5 = 8;
	int control4 = 7;
	int control3 = 6;
	int control2 = 3;
	int control1 = 4;
	int valor1 = nro % 10;
	int valor2 = nro % 100;
	int valor3 = nro % 1000;
	int valor4 = nro % 10000;
	int valor5 = nro % 100000;
	int valor6 = nro % 1000000;
	int valor7 = nro % 10000000;
	int valor8 = nro % 100000000;
	int valor9 = nro % 1000000000;

	//suma += (valor1 * control1);
	suma += ((valor2 - valor1)/10) 		  *	control1;
	suma += ((valor3 - valor2)/100)       *	control2;
	suma += ((valor4 - valor3)/1000)      *	control3;
	suma += ((valor5 - valor4)/10000)     *	control4;
	suma += ((valor6 - valor5)/100000)    *	control5;
	suma += ((valor7 - valor6)/1000000)   *	control6;
	suma += ((valor8 - valor7)/10000000)  *	control7;
	suma += ((valor9 + valor8)/100000000) * control8;

	total = 10 -(suma%10);
	if(valor1 == total){
		control = 1;
	}
	return control;
}

