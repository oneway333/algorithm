<template>
  <div class="category">
    <h3>{{title}}</h3>
        
    <!-- 插槽，等着组件进行填充 -->
    <slot :fuck="fuck"></slot>
  </div>
</template>

<script>
export default {
    name: 'Category',
    props: ['title'],
    data () {
        return {
            fuck: ["fuck1", "fuck2", "fuck3", "fuck4"],
        }
    }
}
</script>

<style scoped>
.category {
    background-color: deepskyblue;
    width: 200px;
    height: 300px;
    
}

h3 {
    background-color: orange;
    text-align: center;
}
img {
    width: 100%;
}

video {
    width: 100%;
}
a{
    color: red;
    margin-right: 5px;
}
</style>