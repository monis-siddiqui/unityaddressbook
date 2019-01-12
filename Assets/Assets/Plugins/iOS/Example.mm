//
//  Example.mm
//  Unity-iPhone
//
//  Created by Masayuki Iwai on 7/10/16.
//
//

#import <Foundation/Foundation.h>
#import "unityswift-Swift.h"

extern "C" {
    void _ex_callSwiftMethod(const char *firsName,const char *lastName,const char *company,const char *number ) {
        // You can access Swift classes directly here.
        [Example swiftMethod:[NSString stringWithUTF8String:firsName] :[NSString stringWithUTF8String:lastName] :[NSString stringWithUTF8String:company] :[NSString stringWithUTF8String:number ]];
    }
}

