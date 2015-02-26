//
//  ThumbnailViewController.h
//  Sermon Slide Generator
//
//  Created by Jason Terhorst on 2/22/15.
//  Copyright (c) 2015 Jason Terhorst. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@class Document;

@interface ThumbnailViewController : NSObject <NSCollectionViewDelegate>

@property (nonatomic, weak) IBOutlet NSCollectionView * thumbnailCollectionView;
@property (nonatomic, weak) IBOutlet Document * document;

- (void)reloadData;

@end