struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 70 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//10. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//11. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//12. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//13. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//14. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//15. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//16. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//17. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//18. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//19. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//20. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//21. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//22. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//23. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//24. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//25. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//26. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//27. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//28. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//29. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//30. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//31. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//32. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//33. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//34. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//35. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//36. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//37. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//38. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//39. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//40. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//41. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//42. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//43. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//44. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//45. EdgeCollider2D
	void RegisterClass_EdgeCollider2D();
	RegisterClass_EdgeCollider2D();

	//46. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//47. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//48. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//49. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//50. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//51. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//52. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//53. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//54. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//55. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//56. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//57. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//58. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//59. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//60. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//61. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//62. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//63. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//64. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//65. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//66. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//67. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//68. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//69. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
