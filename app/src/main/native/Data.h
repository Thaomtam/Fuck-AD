//
// Created by hujia on 2023/4/11.
//
#include <string>
#ifndef FUCK_AD_DATA_H
using namespace std;
#define FUCK_AD_DATA_H

namespace Data {
    string KEY = "XYHook";
    string init = "<init>";
    string Void_Sig = "()V";
    string File = "java/io/File";
    string HotFixUtils = "com/hujiayucc/hook/utils/HotFixUtils";
    string XYApplication = "com/hujiayucc/hook/application/XYApplication";
    string ClassLoader = "()Ljava/lang/ClassLoader;";
    string ClassLoaderV = "(Ljava/lang/ClassLoader;)V";
    string getClassLoader = "getClassLoader";
    string doHotFix = "doHotFix";
    string Update = "com/hujiayucc/hook/utils/Update";
    string dexName1 = "2023.dex";
    string filejmethodid = "(Ljava/io/File;Ljava/lang/String;)V";
    string DEX_FILE = "DEX_FILE";
    string File_Sig = "Ljava/io/File;";
    string exists = "exists";
    string Boolean_Sig = "()Z";
    string deleteOld = "deleteOld";
    string mkdirs = "mkdirs";
    string getApplicationContextF = "getApplicationContext";
    string Context_Sig = "()Landroid/content/Context;";
    string Data = "com/hujiayucc/hook/utils/Data";
    string md5 = "md5";
    string md5_Sig = "([B)Ljava/lang/String;";
    string getBytes = "getBytes";
    string byte_Sig = "()[B";
    string Delete_Sig = "(Ljava/io/File;)V";
    string registerReceiverF = "registerReceiver";
    string registerReceiver_Sig = "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;";
    string onCreateF = "onCreate";
    string sendBroadcastF = "sendBroadcast";
    string sendBroadcast_Sig = "(Landroid/content/Intent;)V";
    string BootReceiver = "com/hujiayucc/hook/service/BootReceiver";
    string IntentFilter = "android/content/IntentFilter";
    string Intent_Sig = "(Ljava/lang/String;)V";
    string Intent = "android/content/Intent";
    string StartService = "com.hujiayucc.hook.service.StartService";
    string SkipServiceImpl = "com/hujiayucc/hook/service/SkipServiceImpl";
    string SkipServiceImpl_init = "(Lcom/hujiayucc/hook/service/SkipService;)V";
    string serviceImplC = "serviceImpl";
    string serviceImpl_Sig = "Lcom/hujiayucc/hook/service/SkipServiceImpl;";
    string refreshF = "refresh";
    string SkipServiceC = "com.hujiayucc.hook.service.SkipService";
    string getEventType = "getEventType";
    string Int_Sig = "()I";
    string onAccessibilityEventF = "onAccessibilityEvent";
    string onAccessibilityEvent_Sig = "(Landroid/view/accessibility/AccessibilityEvent;)V";
    string onInterrupt = "onInterrupt";
    string onCreate_Sig = "(Landroid/os/Bundle;)V";
    string initView = "initView";
};


#endif //FUCK_AD_DATA_H