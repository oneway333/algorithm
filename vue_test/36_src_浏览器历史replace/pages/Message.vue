<template>
  <div>
    <ul>
        <li v-for="m of messages" :key="m.id">
            <!-- 跳转路由并携带params参数，to的字符串写法 -->
            <!-- <router-link :to="`/home/message/details/${m.id}/${m.title}`">{{ m.title }}</router-link> -->

            <!-- 跳转路由并携带params参数，to的对象写法 -->
            <router-link :to="{
                // path: '/home/message/details',
                // params参数不能写path，只能写name
                name: 'xiangqing',  // 可以节省点，但是感觉最好不要省
                params: {
                    id: m.id,
                    title: m.title
                }
            }">
                {{ m.title }}
            </router-link>
        </li>
    </ul>
    <router-view></router-view>
  </div>
</template>

<script>
export default {
    name: 'Message',
    data () {
        return {
            messages: [
                {id: 1, title: 'fuck1'},
                {id: 2, title: 'fuck2'},
                {id: 3, title: 'fuck3'},
            ]
        }
    }

}
</script>

<style>

</style>