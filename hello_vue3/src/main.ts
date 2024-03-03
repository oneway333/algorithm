import {createApp} from 'vue'
import App from './App.vue'
import Hello from './Hello.vue'

// 创建应用
const app = createApp(App)

// 全局组件，后面的不用再引用了，直接<Hello/>就可以了
app.component('Hello',Hello)

// 配置全局属性，在所有组件上都可以用{{ x }}或者"x" 了
app.config.globalProperties.x = 99

declare module 'vue' {
  interface ComponentCustomProperties {
    x:number
  }
}
app.directive('beauty',(element,{value})=>{
  element.innerText += value
  element.style.color = 'green'
  element.style.backgroundColor = 'yellow'
})

// 挂载应用
app.mount('#app')

// setTimeout(() => {
//   app.unmount()
// }, 2000);