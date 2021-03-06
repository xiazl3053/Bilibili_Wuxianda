//
//  YPBangumiContentViewModel.h
//  Wuxianda
//
//  Created by MichaelPPP on 16/7/20.
//  Copyright © 2016年 michaelhuyp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YPBangumiContentModel.h"

@interface YPBangumiContentViewModel : NSObject

#pragma mark - Model
@property (nonatomic, strong) YPBangumiContentModel *model;

@property (nonatomic, copy) NSArray *modelArr;

#pragma mark - init
/** 初始化方法 */
- (instancetype)initWithModel:(YPBangumiContentModel *)model;

#pragma mark - 网络请求相关
/** 请求命令 */
@property (nonatomic, strong, readonly) RACCommand *requestCommand;

/** 从网络中加载启动页数据 */
- (void)loadDataArrFromNetwork;

@end
