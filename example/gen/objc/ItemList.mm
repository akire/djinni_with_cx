// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#import "ItemList.h"


@implementation ItemList

- (nonnull instancetype)initWithItems:(nonnull NSArray *)items
{
    if (self = [super init]) {
        _items = items;
    }
    return self;
}

+ (nonnull instancetype)itemListWithItems:(nonnull NSArray *)items
{
    return [[self alloc] initWithItems:items];
}

@end
