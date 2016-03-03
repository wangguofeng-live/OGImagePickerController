//
//  TZPhotoPreviewController.h
//  TZImagePickerController
//
//  Created by 谭真 on 15/12/24.
//  Copyright © 2015年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TZPhotoPreviewController : UIViewController

@property (nonatomic, strong) NSArray *photoArr;                ///< All photos / 所有图片的数组
@property (nonatomic, strong) NSMutableArray *selectedPhotoArr; ///< Current selected photos / 当前选中的图片数组
@property (nonatomic, assign) NSInteger currentIndex;           ///< Index of the photo user click / 用户点击的图片的索引
@property (nonatomic, assign) BOOL isSelectOriginalPhoto;       ///< If YES,return original photo / 是否返回原图

/// 默认为YES，如果设置为NO,原图按钮将隐藏，用户不能选择发送原图
@property (nonatomic, assign) BOOL allowPickingOriginalPhoto;
/// Appearance / 外观颜色
@property (nonatomic, strong) UIColor *oKButtonTitleColorNormal;
@property (nonatomic, strong) UIColor *oKButtonTitleColorDisabled;

/// Default is 9 / 默认最大可选9张图片
@property (nonatomic, assign) NSInteger maxImagesCount;

/// Return the new selected photos / 返回最新的选中图片数组
@property (nonatomic, copy) void (^returnNewSelectedPhotoArrBlock)(NSMutableArray *newSeletedPhotoArr, BOOL isSelectOriginalPhoto);
@property (nonatomic, copy) void (^okButtonClickBlock)(NSMutableArray *newSeletedPhotoArr, BOOL isSelectOriginalPhoto);

@end
