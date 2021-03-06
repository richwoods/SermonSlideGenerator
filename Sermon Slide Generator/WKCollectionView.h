

#import <Cocoa/Cocoa.h>

#import "WKCollectionViewCell.h"
#import "WKCollectionSectionView.h"
#import "KeyPressWindow.h"

@class WKCollectionView;

@protocol WKCollectionViewDelegate <NSObject>

- (void)clickOnCellAtIndex:(NSInteger)cellIndex section:(NSInteger)section inView:(WKCollectionView *)view;

@end

@protocol WKCollectionViewDatasource <NSObject>

- (CGFloat)aspectRatioForCellsInCollectionView:(WKCollectionView *)view;

- (NSInteger)numberOfSectionsInCollectionView:(WKCollectionView *)view;

- (NSInteger)collectionView:(WKCollectionView *)view numberOfItemsInSection:(NSInteger)section;
- (NSString *)collectionView:(WKCollectionView *)view titleForHeaderInSection:(NSInteger)section;

- (NSImage *)imageForCellAtIndex:(NSInteger)cellIndex section:(NSInteger)section inView:(WKCollectionView *)view;
- (NSString *)titleForCellAtIndex:(NSInteger)cellIndex section:(NSInteger)section inView:(WKCollectionView *)view;

- (BOOL)cellSelectionStateAtIndex:(NSInteger)cellIndex section:(NSInteger)section inView:(WKCollectionView *)view;

@end

@interface WKCollectionView : NSView <WKCollectionSectionViewDelegate>
{
	CGFloat _cellSizeWidth;
}

@property (nonatomic, weak) IBOutlet id<WKCollectionViewDelegate> delegate;
@property (nonatomic, weak) IBOutlet id<WKCollectionViewDatasource> dataSource;

@property (nonatomic, weak) IBOutlet id<KeyPressWindowDelegate> keyPressDelegate;

- (void)reloadData;

@end
