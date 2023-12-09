package com.oneway.blog.dao.mapper;

import com.baomidou.mybatisplus.core.conditions.query.LambdaQueryWrapper;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.oneway.blog.dao.pojo.Article;

public interface ArticleMapper {
    Page<Article> selectPage(Page<Article> page, LambdaQueryWrapper<Article> queryWrapper);
}
