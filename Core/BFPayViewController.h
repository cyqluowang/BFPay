//
//  BFPayViewController.h
//  BFSDK
//
//  Created by JenKin on 15/4/8.
//  Copyright (c) 2015年 Zhejiang BeiFu Technology Co. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>


/**
 支付协议
 */
@protocol BFPayDelegate <NSObject>

/**
 支付成功
 */
@required
-(void)BFPayDidSucceeded:(NSDictionary *)message;
/**
 支付失败
 */
@required
-(void)BFPayDidFailed:(NSDictionary *)message;

/**
 支付之前回调
 */
@optional
-(void)BFPayBeforeSucceed:(NSDictionary *)message;

@end

@interface BFPayViewController : UIViewController


@property (nonatomic ,assign) id<BFPayDelegate>delegate;
//商户号，不能为空
@property (nonatomic ,strong) NSString *partnerID;
//商户约定key，不能为空
@property (nonatomic ,strong) NSString *partnerKey;
//商户名
@property (nonatomic ,strong) NSString *partnerName;
//客户号，不能为空
@property (nonatomic ,strong) NSString *customID;
//订单IP，不能为空
@property (nonatomic ,strong) NSString *orderIP;
//异步通知地址，不能为空
@property (nonatomic ,strong) NSString *notifyURL;
//商品展示网页
@property (nonatomic ,strong) NSString *showURL;
//回传参数
@property (nonatomic ,strong) NSString *passBackParams;
//扩展参数
@property (nonatomic ,strong) NSString *extendParams;
//商品标题，不能为空
@property (nonatomic ,strong) NSString *goodsSubject;



@property (nonatomic, strong) NSString *realName;
@property (nonatomic, strong) NSString *IDNumber;
@property (nonatomic, strong) NSString *bankCardNumber;

//可否解绑
@property (nonatomic, assign) BOOL canUnbind;


//颜色接口  （1）SDK内部所有按钮的背景颜色（2）导航栏填充色（3）标题字体颜色；不设置会默认。
@property (nonatomic ,strong) UIColor *BFButtonBackGroudColor;
@property (nonatomic ,strong) UIColor *BFNavigationBarTintColor;
@property (nonatomic ,strong) UIColor *BFNavigationBarTitleColor;




/**
 *  支付入口
 *
 *  @param orderNum 订单号
 *  @param price    订单金额（需满足首笔次笔支付金额限制条件）
 *  @param info     订单信息
 *
 *  @return 支付控制器
 */
-(instancetype)initWithOrderNum:(NSString *)orderNum andOrderPrice:(NSString *)price andOrderInfo:(NSString *)info;



@end
