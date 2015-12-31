//
//  BFAuthWithdrawViewController.h
//  BFSDK
//
//  Created by JenKin on 15/9/8.
//  Copyright (c) 2015年 Zhejiang BeiFu Technology Co. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>


/**
 认证提现代理
 */
@protocol BFAuthWithdrawDelegate <NSObject>

@optional

-(void)authWithdrawCompletion:(NSDictionary *)responseMessge andResult:(NSString *)result;





@end



@interface BFAuthWithdrawViewController : UIViewController



@property (nonatomic, assign) id<BFAuthWithdrawDelegate> authWithdrawDelegate;

//商户ID
@property (nonatomic, strong) NSString *partnerID;
//商户key
@property (nonatomic ,strong) NSString *partnerKey;
//提现客户，不能为空
@property (nonatomic ,strong) NSString *customID;
//提现订单号，不能为空
@property (nonatomic ,strong) NSString *orderNum;
//提现金额（单位：元；精确到小数点后两位，最高5万元.）
@property (nonatomic ,strong) NSString *amount;
//异步通知地址，不能为空
@property (nonatomic ,strong) NSString *notifyURL;
//提现方式 1000普通提现   2000 即时到帐  （现在仅支持普通提现）
@property (nonatomic ,strong) NSString *withdrawMothod;
//提现时间  yyyymmddhhmiss
@property (nonatomic, strong) NSString *withdrawTime;
//提现备注  如果非空，最多80个汉字
@property (nonatomic ,strong) NSString *withdrawRemark;


//颜色接口  （1）SDK内部所有按钮的背景颜色（2）导航栏填充色（3）标题字体颜色；不设置会默认。
@property (nonatomic ,strong) UIColor *BFButtonBackGroudColor;
@property (nonatomic ,strong) UIColor *BFNavigationBarTintColor;
@property (nonatomic ,strong) UIColor *BFNavigationBarTitleColor;



@end
