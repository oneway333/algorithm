import './assets/main.css'

// 引入创世神，应该相当于 new Vue()
import { createApp } from 'vue'
// 引入根组件 App
import App from './App.vue'

// 创建VM VC对象（App根组件对应的对象），并绑定到页面上
createApp(App).mount('#app')
