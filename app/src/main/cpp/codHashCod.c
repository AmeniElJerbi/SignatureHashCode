#include <jni.h>
#include <stdio.h>
//
// Created by a.ricarti on 21/11/2016.
//

JNIEXPORT jstring JNICALL Java_com_example_aricarti_newtestsegurity_MainActivity_hashCode(JNIEnv* env, jclass jclazz, int value) {

    jstring str;
    if(value == 858984977){
        str = (*env)->NewStringUTF(env, "A validação FUNCIONOU!");
        return str;
    }
    str = (*env)->NewStringUTF(env, "A validação NÃO funcionou!");
    return str;
}


