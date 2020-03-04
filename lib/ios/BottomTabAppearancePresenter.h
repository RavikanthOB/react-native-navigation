#import "BottomTabPresenter.h"

API_AVAILABLE(ios(13.0))
@interface BottomTabAppearancePresenter : BottomTabPresenter

- (instancetype)initWithDefaultOptions:(RNNNavigationOptions *)defaultOptions children:(NSArray<UIViewController *> *)children;

@end
