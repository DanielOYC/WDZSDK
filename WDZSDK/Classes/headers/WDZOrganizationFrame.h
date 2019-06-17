
#import "WDZBaseFrameView.h"

@protocol WDZOrganizationFrameDelegate;
@interface WDZOrganizationFrame : WDZBaseFrameView

@property (nonatomic , weak)id <WDZOrganizationFrameDelegate> delegate;
//已经选中的用户
@property (strong , nonatomic) NSMutableArray *selectedDealUsers;

/**
 0通讯录   1单选   2多选    3多选   4IM多选（不允许传入数组点击，并将数据不传出） 5 IM传入原始数据，不请求(多选) 6  IM传入原始数据，不请求（单选）
 */
@property (strong , nonatomic)NSString *type;

/**
 IM专用  传入数据
 */
@property (nonatomic , retain)NSMutableArray *IMUsers;
/**
 传入IM使用的用户列表（不再请求）
 */
@property (nonatomic , retain)NSMutableArray *IMAllUsers;

@end
@protocol WDZOrganizationFrameDelegate <NSObject>

- (void)frameViewDidBack:(WDZOrganizationFrame *)v;
- (void)frameViewDidOkButton:(WDZOrganizationFrame *)v;

@end
