package com.oneway.blog.service;

import com.oneway.blog.vo.TagVo;

import java.util.List;

public interface TagService {
    List<TagVo> findTagsByArticleId(Long articleId);
}
