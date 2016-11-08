/*******************************************************************************
 *
 * Drone control through voice recognition -- PC to drone communication
 * Team GYTAM, feb. 2016
 *
 *
 ******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for memcmp
#include <stdint.h> // for int16_t and int32_t
#include <math.h>
#include <iostream>
#include "dtw.h"
#include <jni.h>
#include "JNI.h"


/**
* Dtw function that given two matrix of cep coefficient computes distance
* between those two signals.
*  @param n_ck      Dimension of unknow signal
*  @param n_cunk    Dimension of know signal
*  @param dim_mfcc  Size of nfcc decompostion base
*  @param c_k       Matrix of know signal
*  @param c_unk     Matrix of unknow signal
*  @return Distance between the two signals
*/

JNIEXPORT jfloat JNICALL
Java_com_example_ida_dronecontrol_CalculVocal_dtw(JNIEnv *env, jobject instance) {

    return 1.9;

}


/*float dtw(int n_ck, int n_cunk, int dim_mfcc, float* c_k, float* c_unk) {

/* à compléter */
   // return 1.9;
    
//}

