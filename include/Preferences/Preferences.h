@interface PSSpecifier : NSObject
@end

@interface PSViewController : UIViewController
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
@end



@interface PSListController : PSViewController {

    NSArray *_specifiers;

}
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)specifiers;
@end

