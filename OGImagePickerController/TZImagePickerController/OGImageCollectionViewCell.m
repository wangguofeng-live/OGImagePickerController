//
//  OGImageCollectionViewCell.m
//  OGImagePickerController
//
//  Created by mac on 16/3/2.
//  Copyright © 2016年 Onego. All rights reserved.
//

#import "OGImageCollectionViewCell.h"

@implementation OGImageCollectionViewCell

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor whiteColor];
        _imageView = [[UIImageView alloc] init];
        _imageView.backgroundColor = [UIColor colorWithWhite:1.000 alpha:0.500];
        _imageView.contentMode = UIViewContentModeScaleAspectFill;
        [self addSubview:_imageView];
        self.clipsToBounds = YES;
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    _imageView.frame = self.bounds;
}

@end
