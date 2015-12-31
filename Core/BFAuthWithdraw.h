//
//  BFAuthWithdraw.h
//  BFSDK
//
//  Created by JenKin on 15/8/27.
//  Copyright (c) 2015年 Zhejiang BeiFu Technology Co. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>




typedef void(^CompleteBlock_T)(NSDictionary *message,NSString *result);



@interface BFAuthWithdraw : NSObject



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



//初始化提现接口
-(instancetype)initWithPartnerID:(NSString *)partnerID andKey:(NSString *)partnerKey;

//
-(void)withdrawCashWithCompletion:(CompleteBlock_T)block;

//查询绑卡信息接口
-(void)sendGetBindBankCardInfoRequestWithCompletion:(CompleteBlock_T)block;


//解绑银行卡接口
-(void)unbindBankCardAccordingToCustomID:(NSString *)customID completion:(CompleteBlock_T)block;

@end
