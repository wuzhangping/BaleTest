//
//  ZWURLRouterFilter.h
//  ZWURLRouter
//
//  Created by 王东伟 on 2019/11/13.
//  Copyright © 2019 王东伟. All rights reserved.
//

@protocol ZWURLRouterFilter <NSObject>

- (NSString *)doFilter:(NSString *)url;

@end
