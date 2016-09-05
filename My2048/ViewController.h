//
//  ViewController.h
//  My2048
//
//  Created by 牛高航 on 16/9/5.
//  Copyright © 2016年 牛高航. All rights reserved.
//


#define NOMOVE  0
#define UP      1
#define DOWN    2
#define LEFT    3
#define RIGHT   4


#import <UIKit/UIKit.h>
#import "MyButton.h"


@interface ViewController : UIViewController

@property (strong, nonatomic) MyButton *button1, *button2, *button3, *button4, *button5, *button6, *button7, *button8, *button9, *button10, *button11, *button12, *button13, *button14, *button15, *button16;
@property (strong, nonatomic) UILabel *fenShu;
@property (strong, nonatomic) UILabel *zuiGaoFenShu;
@property int fenShuZhi,zuiGaoFenShuZhi;
//开始点坐标
@property CGPoint beginPoint;
//结束点坐标
@property CGPoint endPoint;
//触摸滑动方向
@property int direction;

@end

