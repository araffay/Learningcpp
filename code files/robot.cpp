#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <windows.h>
using namespace std;

void doanimation(){

    int a = 100;
    int b = 600;

        cout << "                                                      " << endl;
        cout << "             CONNECTING                                         " << endl;
        cout << "                 TO                                     " << endl;
        cout << "               SERVER...                                       " << endl;

    _sleep(b);
    system("cls");


        cout << "                                                      " << endl;
        cout << "                                                      " << endl;
        cout << "                                                      " << endl;
        cout << "                PROCESSING                                            " << endl;
        cout << "                   YOUR                                      " << endl;
        cout << "                 QUESTION...                                       " << endl;

    _sleep(b);
    system("cls");

        cout << "                                                      " << endl;
        cout << "                                                      " << endl;
        cout << "                                                      " << endl;
        cout << "             THIS MAY TAKE A WHILE                                                " << endl;
        cout << "                 PLEASE WAIT...                                              " << endl;
        cout << "                                                      " << endl;
        cout << "                                                      " << endl;
        cout << "                                                      " << endl;


    _sleep(b);
    system("cls");


    for(int i = 0; i < 4; i++){
        cout << " SAMPLE_PATH := $(call my-dir)/../../src" << endl;
        _sleep(a);
        cout << " # external-deps " << endl;
        _sleep(a);
        cout << " GAMEPLAY_DEPS := $(call my-dir)/../../../../external-deps/lib/android/$(TARGET_ARCH_ABI) " << endl;
        _sleep(a);
        cout << " # libgameplay " << endl;
        _sleep(a);
        cout << " LOCAL_PATH := $(call my-dir)/../../../../gameplay/android/libs/$(TARGET_ARCH_ABI) " << endl;
        _sleep(a);
        cout << " include $(CLEAR_VARS) LOCAL_MODULE    := libgameplay " << endl;
        _sleep(a);
        cout << "LOCAL_SRC_FILES := libgameplay.so include $(PREBUILT_SHARED_LIBRARY)" << endl;
        _sleep(a);
        cout << " # libgameplay-deps " << endl;
        _sleep(a);
        cout << " LOCAL_PATH := $(GAMEPLAY_DEPS) include $(CLEAR_VARS) " << endl;
        _sleep(a);
        cout << " LOCAL_MODULE    := libgameplay-deps LOCAL_SRC_FILES := libgameplay-deps.a " << endl;
        _sleep(a);
        cout << " include $(PREBUILT_STATIC_LIBRARY) " << endl;
        _sleep(a);
        cout << "# sample-browser " << endl;
        _sleep(a);
        cout << " LOCAL_PATH := $(SAMPLE_PATH) " << endl;
        _sleep(a);
        cout << " include $(CLEAR_VARS) " << endl;
        _sleep(a);
        cout << " LOCAL_MODULE    := sample-browser " << endl;
        _sleep(a);
        cout << " LOCAL_SRC_FILES := ../../../gameplay/src/gameplay-main-android.cpp \\ " << endl;
        _sleep(a);
        cout << "     FirstPersonCamera.cpp \\ " << endl;
        _sleep(a);
        cout << "     Grid.cpp \\ " << endl;
        _sleep(a);
        cout << "     Sample.cpp \\ " << endl;
        _sleep(a);
        cout << "     SamplesGame.cpp \\ " << endl;
        _sleep(a);
        cout << "     Audio3DSample.cpp \\ " << endl;
        _sleep(a);
        cout << "     AudioSample.cpp \\ " << endl;
        _sleep(a);
        cout << "     BillboardSample.cpp \\ " << endl;
        _sleep(a);
        cout << "     FontSample.cpp \\ " << endl;
        _sleep(a);
        cout << " LOCAL_STATIC_LIBRARIES := android_native_app_glue libgameplay-deps " << endl;
        _sleep(a);
        cout << " LOCAL_CPPFLAGS += -std=c++11 -frtti -Wno-switch-enum -Wno-switch " << endl;
        _sleep(a);

        system("cls");
























    }
























}
